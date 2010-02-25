// fminer.h
// © 2010 by Andreas Maunz, andreas@maunz.de, feb 2010

/*
    This file is part of Fminer (fminer). 

    LibFminer is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    LibFminer is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with LibFminer.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FMINER_H
#define FMINER_H

class Fminer {

public:

    Fminer () 
    Fminer (int _type, unsigned int _minfreq)
    Fminer (int _type, unsigned int _minfreq, float chisq_val, bool _do_backbone)
    virtual ~Fminer() {}
//    virtual void Reset() {}
//    virtual void Defaults() {}
//    virtual int GetMinfreq() {}
//    virtual int GetType() {}
    virtual bool GetBackbone() {}
//    virtual bool GetDynamicUpperBound() {}
//    virtual bool GetDynamicUpperBound() {}
//    virtual bool GetPruning() {}
    virtual bool GetConsoleOut() {}
//    virtual bool GetAromatic() {}
//    virtual bool GetRefineSingles() {}
//    virtual bool GetDoOutput() {}
//    virtual bool GetBbrcSep() {}
//    virtual bool GetMostSpecTreesOnly() {}
//    virtual bool GetChisqActive() {}
//    virtual float GetChisqSig() {}
//    virtual bool GetLineNrs() {}
    virtual bool GetRegression() {}
//    virtual void SetMinfreq(int val) {}
//    virtual void SetType(int val) {}
//    virtual void SetBackbone(bool val) {}
    virtual void SetDynamicUpperBound(bool val) {}
    virtual void SetPruning(bool val) {}
    virtual void SetConsoleOut(bool val) {}
    virtual void SetAromatic(bool val) {}
    virtual void SetRefineSingles(bool val) {}
//    virtual void SetDoOutput(bool val) {}  
    virtual void SetBbrcSep(bool val) {}
    virtual void SetMostSpecTreesOnly(bool val) {}
    virtual void SetChisqActive(bool val) {}
//    virtual void SetChisqSig(float _chisq_val) {}
    virtual void SetLineNrs(bool val) {}
    virtual void SetRegression(bool val) {}
    virtual vector<string>* MineRoot(unsigned int j) {}

    virtual void ReadGsp(FILE* gsp) {}
    virtual bool AddCompound(string smiles, unsigned int comp_id) {}
    virtual bool AddActivity(float act, unsigned int comp_id) {}
    virtual int GetNoRootNodes() {return fm::database->nodelabels.size();}
    virtual int GetNoCompounds() {return fm::database->trees.size();}

/*private:

    virtual void AddChiSqNa(){fm::chisq->na++;fm::chisq->n++;}
    virtual void AddChiSqNi(){fm::chisq->ni++;fm::chisq->n++;}
    virtual void AddKS(float val){fm::ks->all.push_back(val);}
    virtual bool init_mining_done {}
    virtual int comp_runner {}
    virtual int comp_no {}
    virtual vector<string> r {}
*/
};

// the types of the class factories
typedef Fminer* create_t();
typedef void destroy_t(Fminer*);

#endif

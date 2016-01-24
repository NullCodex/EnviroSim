#ifndef TRAININGDATA_H
#define TRAININGDATA_H

#include <iostream>
#include <fstream>
#include <vector>

class TrainingData
{
public:
    TrainingData(const string filename);
    bool isEof(void); { return m_trainingDataFile.eof(); }
    void getTopology(vector<unsigned> &topology);

    // Returns the number of input values read from the file:
    unsigned getNextInputs(vector<double> &inputVals);
    unsigned getTargetOutputs(vector<double> &targetOutputVals);

private:
    ifstream m_trainingDataFile;
};
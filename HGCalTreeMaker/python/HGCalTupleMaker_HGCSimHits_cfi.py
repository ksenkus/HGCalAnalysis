import FWCore.ParameterSet.Config as cms

hgcalTupleHGCSimHits = cms.EDProducer("HGCalTupleMaker_HGCSimHits",
  source = cms.untracked.VInputTag(
        cms.untracked.InputTag("g4SimHits","HGCHitsEE"),
        cms.untracked.InputTag("g4SimHits","HGCHitsHEfront"),
        cms.untracked.InputTag("g4SimHits","HGCHitsHEback")
        ),
  geometrySource = cms.untracked.vstring(
        'HGCalEESensitive',
        'HGCalHESiliconSensitive',
        'HGCalHEScintillatorSensitive'
  ),
  Prefix = cms.untracked.string  ("HGCSimHits"),
  Suffix = cms.untracked.string  ("")
)

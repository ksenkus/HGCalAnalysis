#ifndef HGCalTupleMaker_GenParticles_h
#define HGCalTupleMaker_GenParticles_h

#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "FWCore/Framework/interface/Event.h"
#include <DataFormats/HepMCCandidate/interface/GenParticle.h>

class HGCalTupleMaker_GenParticles : public edm::EDProducer {
 public:
  explicit HGCalTupleMaker_GenParticles(const edm::ParameterSet&);

 private:
  void produce( edm::Event &, const edm::EventSetup & );
  const edm::InputTag   inputTag;
  const std::string     prefix,suffix;

  edm::EDGetTokenT<edm::View<reco::GenParticle>> genCollectionToken_;
  bool debug;

};

#endif

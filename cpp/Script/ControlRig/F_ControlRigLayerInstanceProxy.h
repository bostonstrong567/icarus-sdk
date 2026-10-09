// /Script/ControlRig.ControlRigLayerInstanceProxy
// size 0x810, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Sequencer/ControlRigLayerInstanceProxy.h

USTRUCT()
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
protected:
    FAnimNode_ControlRigInputPose InputPose;  // 0x0770, not reflected
    FAnimNode_Base * CurrentRoot;  // 0x07A0, not reflected
    TArray<FAnimNode_ControlRig_ExternalSource,TSizedDefaultAllocator<32> > ControlRigNodes;  // 0x07A8, not reflected
    TMap<int,FAnimNode_ControlRig_ExternalSource *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource *,0> > SequencerToControlRigNodeMap;  // 0x07B8, not reflected
    UAnimInstance * CurrentSourceAnimInstance;  // 0x0808, not reflected
};

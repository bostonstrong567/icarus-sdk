// /Script/ControlRig.ControlRigLayerInstanceProxy
// size 0x810, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Sequencer/ControlRigLayerInstanceProxy.h

USTRUCT()
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{

    // Not reflected:
    FAnimNode_ControlRigInputPose InputPose;  // 0x0770
    FAnimNode_Base * CurrentRoot;  // 0x07A0
    TArray<FAnimNode_ControlRig_ExternalSource,TSizedDefaultAllocator<32> > ControlRigNodes;  // 0x07A8
    TMap<int,FAnimNode_ControlRig_ExternalSource *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnimNode_ControlRig_ExternalSource *,0> > SequencerToControlRigNodeMap;  // 0x07B8
    UAnimInstance * CurrentSourceAnimInstance;  // 0x0808
};

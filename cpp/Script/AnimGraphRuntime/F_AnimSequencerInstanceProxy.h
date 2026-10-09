// /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
// size 0xA10, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimSequencerInstanceProxy.h

USTRUCT()
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
protected:
    FAnimNode_ApplyAdditive SequencerRootNode;  // 0x0770, not reflected
    FAnimNode_MultiWayBlend FullBodyBlendNode;  // 0x0838, not reflected
    FAnimNode_MultiWayBlend AdditiveBlendNode;  // 0x0888, not reflected
    FAnimNode_PoseSnapshot SnapshotNode;  // 0x08D8, not reflected
    TMap<unsigned int,FSequencerPlayerBase *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FSequencerPlayerBase *,0> > SequencerToPlayerMap;  // 0x0968, not reflected
    TOptional<FRootMotionOverride> RootMotionOverride;  // 0x09C0, not reflected
};

// /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
// size 0xA10, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimSequencerInstanceProxy.h

USTRUCT()
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{

    // Not reflected:
    FAnimNode_ApplyAdditive SequencerRootNode;  // 0x0770
    FAnimNode_MultiWayBlend FullBodyBlendNode;  // 0x0838
    FAnimNode_MultiWayBlend AdditiveBlendNode;  // 0x0888
    FAnimNode_PoseSnapshot SnapshotNode;  // 0x08D8
    TMap<unsigned int,FSequencerPlayerBase *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FSequencerPlayerBase *,0> > SequencerToPlayerMap;  // 0x0968
    TOptional<FRootMotionOverride> RootMotionOverride;  // 0x09C0
};

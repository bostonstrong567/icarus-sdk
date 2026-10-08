// /Script/LiveLinkInterface.CachedSubjectFrame
// size 0x160, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h

USTRUCT()
struct FCachedSubjectFrame
{

    // Not reflected:
    FLiveLinkSkeletonStaticData SourceSkeletonData;  // 0x0008
    FLiveLinkAnimationFrameData SourceAnimationFrameData;  // 0x0038
    TArray<TTuple<bool,FTransform>,TSizedDefaultAllocator<32> > CachedRootSpaceTransforms;  // 0x00E8
    TArray<TTuple<bool,TArray<int,TSizedDefaultAllocator<32> > >,TSizedDefaultAllocator<32> > CachedChildTransformIndices;  // 0x00F8
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > CachedCurves;  // 0x0108
    bool bHaveCachedCurves;  // 0x0158
};

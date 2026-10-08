// /Script/Landscape.LandscapeInfo
// Derives from: UObject
// size 0x210, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeInfo.h

UCLASS(Transient)
class ULandscapeInfo : public UObject
{
public:
    UPROPERTY() TLazyObjectPtr<ALandscape> LandscapeActor;  // 0x0028, size 0x1C
    UPROPERTY() FGuid LandscapeGuid;  // 0x0044, size 0x10
    UPROPERTY() int32 ComponentSizeQuads;  // 0x0054, size 0x4
    UPROPERTY() int32 SubsectionSizeQuads;  // 0x0058, size 0x4
    UPROPERTY() int32 ComponentNumSubsections;  // 0x005C, size 0x4
    UPROPERTY() FVector DrawScale;  // 0x0060, size 0xC
    UPROPERTY() TArray<ALandscapeStreamingProxy*> Proxies;  // 0x0110, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMap<FIntPoint,ULandscapeComponent *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,ULandscapeComponent *,0> > XYtoComponentMap;  // 0x0070
    TMap<FIntPoint,ULandscapeHeightfieldCollisionComponent *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,ULandscapeHeightfieldCollisionComponent *,0> > XYtoCollisionComponentMap;  // 0x00C0
    TSet<ULandscapeComponent *,DefaultKeyFuncs<ULandscapeComponent *,0>,FDefaultSetAllocator> SelectedComponents;  // 0x0120, private
    TSet<ULandscapeComponent *,DefaultKeyFuncs<ULandscapeComponent *,0>,FDefaultSetAllocator> SelectedRegionComponents;  // 0x0170, private
    TMap<FIntPoint,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,float,0> > SelectedRegion;  // 0x01C0
};

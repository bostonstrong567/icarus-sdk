// /Script/Engine.MapBuildDataRegistry
// Derives from: UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h

UCLASS(MinimalAPI)
class UMapBuildDataRegistry : public UObject
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ELightingBuildQuality> LevelLightingQuality;  // 0x0028, size 0x1
private:
    TMap<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0> > MeshBuildData;  // 0x0030, not reflected
    TMap<FGuid,FPrecomputedLightVolumeData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData *,0> > LevelPrecomputedLightVolumeBuildData;  // 0x0080, not reflected
    TMap<FGuid,FPrecomputedVolumetricLightmapData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData *,0> > LevelPrecomputedVolumetricLightmapBuildData;  // 0x00D0, not reflected
    TMap<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0> > LightBuildData;  // 0x0120, not reflected
    TMap<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0> > ReflectionCaptureBuildData;  // 0x0170, not reflected
    TMap<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0> > SkyAtmosphereBuildData;  // 0x01C0, not reflected
    bool bSetupResourceClusters;  // 0x0210, not reflected
    TArray<FLightmapResourceCluster,TSizedDefaultAllocator<32> > LightmapResourceClusters;  // 0x0218, not reflected
    FRenderCommandFence DestroyFence;  // 0x0228, not reflected
};

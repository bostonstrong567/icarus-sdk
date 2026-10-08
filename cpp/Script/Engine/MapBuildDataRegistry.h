// /Script/Engine.MapBuildDataRegistry
// Derives from: UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h

UCLASS(MinimalAPI)
class UMapBuildDataRegistry : public UObject
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ELightingBuildQuality> LevelLightingQuality;  // 0x0028, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TMap<FGuid,FMeshMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0> > MeshBuildData;  // 0x0030, private
    TMap<FGuid,FPrecomputedLightVolumeData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData *,0> > LevelPrecomputedLightVolumeBuildData;  // 0x0080, private
    TMap<FGuid,FPrecomputedVolumetricLightmapData *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedVolumetricLightmapData *,0> > LevelPrecomputedVolumetricLightmapBuildData;  // 0x00D0, private
    TMap<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0> > LightBuildData;  // 0x0120, private
    TMap<FGuid,FReflectionCaptureMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureMapBuildData,0> > ReflectionCaptureBuildData;  // 0x0170, private
    TMap<FGuid,FSkyAtmosphereMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FSkyAtmosphereMapBuildData,0> > SkyAtmosphereBuildData;  // 0x01C0, private
    bool bSetupResourceClusters;  // 0x0210, private
    TArray<FLightmapResourceCluster,TSizedDefaultAllocator<32> > LightmapResourceClusters;  // 0x0218, private
    FRenderCommandFence DestroyFence;  // 0x0228, private
};

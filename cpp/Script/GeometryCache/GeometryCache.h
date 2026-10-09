// /Script/GeometryCache.GeometryCache
// Derives from: UObject
// size 0x70, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCache.h

UCLASS(Config=Engine)
class UGeometryCache : public UObject, public IInterface_AssetUserData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> Materials;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) TArray<UGeometryCacheTrack*> Tracks;  // 0x0040, size 0x10
protected:
    UPROPERTY(BlueprintReadOnly) int32 StartFrame;  // 0x0060, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 EndFrame;  // 0x0064, size 0x4
    UPROPERTY() uint64 Hash;  // 0x0068, size 0x8
private:
    FRenderCommandFence ReleaseResourcesFence;  // 0x0050, not reflected
};

// /Script/Engine.LightmappedSurfaceCollection
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Lightmass/LightmappedSurfaceCollection.h

UCLASS(EditInlineNew, MinimalAPI)
class ULightmappedSurfaceCollection : public UObject
{
public:
    UPROPERTY(EditAnywhere) UModel* SourceModel;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) TArray<int32> Surfaces;  // 0x0030, size 0x10
};

// /Script/GeometryCollectionEngine.GeometryCollectionSource
// size 0x60, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h

USTRUCT()
struct FGeometryCollectionSource
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoftObjectPath SourceGeometryObject;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LocalTransform;  // 0x0020, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> SourceMaterial;  // 0x0050, size 0x10
};

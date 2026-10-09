// /Script/ApexDestruction.DestructibleFractureSettings
// Derives from: UObject
// size 0xB8, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleFractureSettings.h

UCLASS(MinimalAPI)
class UDestructibleFractureSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere) int32 CellSiteCount;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Transient) FFractureMaterial FractureMaterialDesc;  // 0x002C, size 0x24
    UPROPERTY(EditAnywhere) int32 RandomSeed;  // 0x0050, size 0x4
    UPROPERTY() TArray<FVector> VoronoiSites;  // 0x0058, size 0x10
    UPROPERTY() int32 OriginalSubmeshCount;  // 0x0068, size 0x4
    UPROPERTY() TArray<UMaterialInterface*> Materials;  // 0x0070, size 0x10
    UPROPERTY() TArray<FDestructibleChunkParameters> ChunkParameters;  // 0x0080, size 0x10
    nvidia::apex::DestructibleAssetAuthoring * ApexDestructibleAssetAuthoring;  // 0x0090, not reflected
    TArray<nvidia::apex::DestructibleChunkDesc,TSizedDefaultAllocator<32> > ChunkDescs;  // 0x0098, not reflected
    TArray<nvidia::apex::DestructibleGeometryDesc,TSizedDefaultAllocator<32> > GeometryDescs;  // 0x00A8, not reflected
};

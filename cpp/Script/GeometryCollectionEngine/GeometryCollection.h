// /Script/GeometryCollectionEngine.GeometryCollection
// Derives from: UObject
// size 0x108, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h

UCLASS()
class UGeometryCollection : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UObject * EditableMesh;  // 0x0028, not reflected
    UPROPERTY(EditAnywhere) bool EnableClustering;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) int32 ClusterGroupIndex;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxClusterLevel;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) TArray<float> DamageThreshold;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) EClusterConnectionTypeEnum ClusterConnectionType;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGeometryCollectionSource> GeometrySource;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> Materials;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ECollisionTypeEnum CollisionType;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EImplicitTypeEnum ImplicitType;  // 0x0079, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinLevelSetResolution;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxLevelSetResolution;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinClusterLevelSetResolution;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxClusterLevelSetResolution;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CollisionObjectReductionPercentage;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bMassAsDensity;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Mass;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinimumMassClamp;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CollisionParticlesFraction;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaximumCollisionParticles;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool EnableRemovePiecesOnFracture;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> RemoveOnFractureMaterials;  // 0x00C0, size 0x10
private:
    UPROPERTY() FGuid PersistentGuid;  // 0x00D0, size 0x10
    UPROPERTY() FGuid StateGuid;  // 0x00E0, size 0x10
    UPROPERTY() int32 BoneSelectedMaterialIndex;  // 0x00F0, size 0x4
    TSharedPtr<FGeometryCollection,1> GeometryCollection;  // 0x00F8, not reflected
};

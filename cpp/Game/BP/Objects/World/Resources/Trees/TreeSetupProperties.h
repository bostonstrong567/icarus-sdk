// /Game/BP/Objects/World/Resources/Trees/TreeSetupProperties.TreeSetupProperties
// size 0x140

USTRUCT()
struct TreeSetupProperties
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> Stats;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionDetachThreshold;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionDetachInvScaleMultiplier;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageActionBreakEffort;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AngularDampingZ;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MassRelativeCollisionDamageRatio;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPhysicalMaterial* TreePrimitivePhysicsMaterial;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTreeAudioDataRowHandle AudioDataRow;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, TreePrimitiveSubdivideMeshes> SubdivedMeshSets;  // 0x0088, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FName> PrimitivesSubdivedMeshes;  // 0x00D8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugCollisions;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugMetadata;  // 0x0129, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> LeafPrimitivesToForceDetach;  // 0x0130, size 0x10
};

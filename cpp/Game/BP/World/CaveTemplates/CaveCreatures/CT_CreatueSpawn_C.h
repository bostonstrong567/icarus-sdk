// /Game/BP/World/CaveTemplates/CaveCreatures/CT_CreatueSpawn.CT_CreatueSpawn_C
// Derives from: AActor > UObject
// size 0x271, a blueprint class, blueprint

UCLASS(Config=Engine)
class ACT_CreatueSpawn_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* PreviewMesh;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_03;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_MED_01;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_02;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_MED_06;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_MED_03;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_01;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_05;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CaveRocks;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECreatureSpawnType> CreatureType;  // 0x0270, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};

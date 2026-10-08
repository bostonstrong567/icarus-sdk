// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_MoHideout1.BP_MoHideout1_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MoHideout1_C : public ABP_Prebuilt_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard5;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene5;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard4;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene4;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard3;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene3;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard2;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene2;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard1;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene1;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnerBasic_C*> Spawners;  // 0x0488, size 0x10

    UFUNCTION(BlueprintCallable) void BP_MoHideout1_AutoGenFunc(ABP_ManualAISpawnerBasic_C* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetChest(AIcarusItem*& Array_Element);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnSpawner(FAISetupRowHandle AISetup, USceneComponent* Target);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SpawnSpawners();
};

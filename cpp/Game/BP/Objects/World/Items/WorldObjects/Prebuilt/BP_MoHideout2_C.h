// /Game/BP/Objects/World/Items/WorldObjects/Prebuilt/BP_MoHideout2.BP_MoHideout2_C
// Derives from: ABP_Prebuilt_Base_C > APrebuiltStructure > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MoHideout2_C : public ABP_Prebuilt_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard3;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene3;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard2;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene2;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard1;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene1;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable) void AddPlants();
    UFUNCTION(BlueprintCallable) void GetChest(AIcarusItem*& Array_Element);  // parameters 0x8
};

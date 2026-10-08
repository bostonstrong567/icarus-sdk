// /Game/BP/Quests/BP_QuestMarker.BP_QuestMarker_C
// Derives from: AQuestMarker > AActor > UObject
// size 0x298, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_QuestMarker_C : public AQuestMarker
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere1;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* FailedBillboard;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Failed;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool Debug;  // 0x0279, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesEnum Biome;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) TSubclassOf<AActor> PreviewClass;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCallable) bool GetFlatAreaSize(float& Size);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RefreshBiome();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void Validate();
    UFUNCTION(BlueprintCallable) bool ValidateFlatArea();  // parameters 0x1
};

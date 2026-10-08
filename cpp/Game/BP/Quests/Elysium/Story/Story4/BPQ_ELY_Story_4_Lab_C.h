// /Game/BP/Quests/Elysium/Story/Story4/BPQ_ELY_Story_4_Lab.BPQ_ELY_Story_4_Lab_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_4_Lab_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* SpawnPoint;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Spawned_AI;  // 0x0480, size 0x10, named "Spawned AI"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPlayerCharacter*> Players;  // 0x0490, size 0x10

    UFUNCTION(BlueprintCallable) void AIKilled();
    UFUNCTION() void BndEvt__BPQ_GH_IM_B_LocationA_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BPQ_GH_IM_O1_Researchers_3_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CharacterCheck(UObject* Object, AIcarusPlayerCharacter*& AsIcarus_Player_Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_4_Lab(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnReady(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnedAI(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TriggerAttack();
};

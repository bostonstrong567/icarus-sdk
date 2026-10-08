// /Game/BP/Quests/Common/BPQ_Common_MapIconOnArrival_Subquests.BPQ_Common_MapIconOnArrival_Subquests_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x489, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_MapIconOnArrival_Subquests_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPlayerCharacter*> PlayersInRange;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bShowMapIcon;  // 0x0488, size 0x1

    UFUNCTION() void BndEvt__BPQ_GH_IM_B_LocationA_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BPQ_GH_IM_O1_Researchers_3_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CharacterCheck(UObject* Object, AIcarusPlayerCharacter*& AsIcarus_Player_Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_MapIconOnArrival_Subquests(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_bShowMapIcon();
    UFUNCTION(BlueprintCallable) void PlayerEntered(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayerLeft(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

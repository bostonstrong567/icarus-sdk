// /Game/BP/Quests/Elysium/Story/Story1/BPQ_ELY_Story_1_Eden_Mo.BPQ_ELY_Story_1_Eden_Mo_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_1_Eden_Mo_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsEnum SessionFlagToGrant;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CharacterName;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool EnableMapIcon;  // 0x0498, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle MapIconRetryTimer;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool DefaultIconEnabled;  // 0x04A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delay;  // 0x04AC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FText Display_Name;  // 0x04B0, size 0x18, named "Display Name"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_1_Eden_Mo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void Interacted();
    UFUNCTION(BlueprintCallable) void OnRep_EnableMapIcon();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupMapIcon();
};

// /Game/BP/Quests/Styx/A/Extermination2/BPQ_STYX_A_Extermination2_Hunt.BPQ_STYX_A_Extermination2_Hunt_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_A_Extermination2_Hunt_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Easy_Count;  // 0x0470, size 0x4, named "Easy Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Normal_Count;  // 0x0474, size 0x4, named "Normal Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Hard_Count;  // 0x0478, size 0x4, named "Hard Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Easy_Count_Great_River;  // 0x047C, size 0x4, named "Easy Count Great River"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Normal_Count_Great_River;  // 0x0480, size 0x4, named "Normal Count Great River"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Hard_Count_Great_River;  // 0x0484, size 0x4, named "Hard Count Great River"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_A_Extermination2_Hunt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnCreatureDeath(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

// /Game/BP/Quests/Styx/C/Extermination2/BPQ_STYX_C_Extermination2_Kill_PolarBear.BPQ_STYX_C_Extermination2_Kill_PolarBear_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x494, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_C_Extermination2_Kill_PolarBear_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Easy_Count;  // 0x0470, size 0x4, named "Easy Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Normal_Count;  // 0x0474, size 0x4, named "Normal Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Hard_Count;  // 0x0478, size 0x4, named "Hard Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x047C, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_C_Extermination2_Kill_PolarBear(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void HasTonic(AIcarusPlayerCharacter* Player, bool& TonicFound);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnCreatureDeath(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

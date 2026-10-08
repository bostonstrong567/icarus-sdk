// /Game/BP/Quests/Elysium/SideQuests/Igloo/ELY_SQ_Igloo_Build_Pieces.ELY_SQ_Igloo_Build_Pieces_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x474, a blueprint class, blueprint

UCLASS(Config=Engine)
class AELY_SQ_Igloo_Build_Pieces_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentPieces;  // 0x0470, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckGrid(ABP_Grid_Base_C* Grid, int32& Pieces);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_ELY_SQ_Igloo_Build_Pieces(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

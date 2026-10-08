// /Game/BP/Quests/Styx/E/Extraction/STYX_E_Extraction_MineMeta.STYX_E_Extraction_MineMeta_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ASTYX_E_Extraction_MineMeta_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0480, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x04B0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_STYX_E_Extraction_MineMeta(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};

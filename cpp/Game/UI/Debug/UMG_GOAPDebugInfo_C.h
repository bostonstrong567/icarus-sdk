// /Game/UI/Debug/UMG_GOAPDebugInfo.UMG_GOAPDebugInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GOAPDebugInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_CharacterName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_CurrentGoal;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_CurrentPlan;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Distance;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Motivations;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_VisibleTargets;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusNPCGOAPController_C* ControllerRef;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusNPCGOAPCharacter_C* CharacterRef;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString TargetString;  // 0x02A8, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GOAPDebugInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};

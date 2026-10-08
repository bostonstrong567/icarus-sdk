// /Game/BP/Tools/CheatFunctions/UMG_ExperienceGained.UMG_ExperienceGained_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ExperienceGained_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Fade;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceEvent;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Sign;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GrantedXP;  // 0x02A0, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ExperienceGained(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Remove();
    UFUNCTION(BlueprintCallable) void UpdateXPAmount(int32 AdditionalXP);  // parameters 0x4
};

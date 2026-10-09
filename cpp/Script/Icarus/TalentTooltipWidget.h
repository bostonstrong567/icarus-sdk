// /Script/Icarus.TalentTooltipWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, declared in Icarus/Source/Icarus/Talents/View/TalentTooltipWidget.h

UCLASS(EditInlineNew)
class UTalentTooltipWidget : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTalentModelInterface_Const* Model;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTalentsRowHandle Talent;  // 0x0268, size 0x18
public:
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void SetTalent(UTalentModelInterface_Const* InModel, FTalentsRowHandle InTalent);  // parameters 0x20
};

// /Script/Icarus.TalentViewInterface
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, declared in Icarus/Source/Icarus/Talents/View/TalentViewInterface.h

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UTalentViewInterface : public UUserWidget
{
protected:
    TScriptInterface<ITalentControllerInterface> Controller;  // 0x0260, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TScriptInterface<ITalentControllerInterface> GetController() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UTalentGraphWidget* GetGraphWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UTalentModelInterface_Const* GetModel() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UTalentTreeWidget*> GetTalentTreeWidgets();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FTalentViewsRowHandle GetViewData() const;  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetController(const TScriptInterface<ITalentControllerInterface>& InController);  // parameters 0x10

    // Virtual functions that start here:
    //   GetViewData, NativeModelViewChanged
};

// /Script/Icarus.TalentControllerInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Talents/Controller/TalentControllerInterface.h

UCLASS(Abstract)
class UTalentControllerInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) bool AreAllFlagsSet(const TArray<FFlagsMultiRowHandle>& Flags);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool AreAnyFlagsSet(const TArray<FFlagsMultiRowHandle>& Flags);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool CanRefundTalent(FTalentsRowHandle Talent, ERefundTalentResponse& SuccessOrFailureReason);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) void ForceRefresh();
    UFUNCTION(BlueprintCallable, BlueprintPure) UTalentModelInterface* GetModel() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FTalentModelViewsRowHandle GetModelViewData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UTalentModelInterface_Const* GetModel_Const() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UTalentViewInterface* GetView() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasView() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsInteractionEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool RefundTalent(FTalentsRowHandle Talent);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetIsInteractionEnabled(bool IsEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) UTalentModelInterface* SetModel(FTalentModelsRowHandle InModel);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetModelView(FTalentModelViewsRowHandle InModelView);  // parameters 0x18
    UFUNCTION(BlueprintCallable) UTalentViewInterface* SetView(FTalentViewsRowHandle InView);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool UnlockNextTalentRank(FTalentsRowHandle Talent, bool bForceUnlock);  // parameters 0x1A
};

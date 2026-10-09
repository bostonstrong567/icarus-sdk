// /Script/Icarus.TalentModelInterface
// Derives from: UTalentModelInterface_Const > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Talents/Model/TalentModelInterface.h

UCLASS(Abstract)
class UTalentModelInterface : public UTalentModelInterface_Const
{
public:
    UFUNCTION(BlueprintCallable) void ResetTalents();
    UFUNCTION(BlueprintCallable) void SetController(const TScriptInterface<ITalentControllerInterface>& InController);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLevel(int32 InLevel);  // parameters 0x4
};

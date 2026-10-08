// /Game/BP/UI/BP_UMGFunctionLibrary.BP_UMGFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UMGFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void Get_Prospect_Pin_State_Data(TEnumAsByte<E_ProspectState> Prospect_State, UObject* __WorldContext, FProspectPinState& Prospect_Pin_State);  // parameters 0x2F8, named "Get Prospect Pin State Data"
};

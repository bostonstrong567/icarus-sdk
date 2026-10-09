// /Game/UI/UMG_FunctionLibrary.UMG_FunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UUMG_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetButtonState(UButton* Button, UObject* __WorldContext, TEnumAsByte<E_ButtonState>& State);  // parameters 0x11
};

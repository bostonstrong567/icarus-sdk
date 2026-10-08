// /Game/BP/Systems/BP_IcarusGameUserSettingsFunctionLibrary.BP_IcarusGameUserSettingsFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGameUserSettingsFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void Get_Icarus_Game_User_Settings(UObject* __WorldContext, UBP_IcarusGameUserSettings_C*& Settings);  // parameters 0x10, named "Get Icarus Game User Settings"
};

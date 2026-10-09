// /Script/AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/AdvancedSteamWorkshopLibrary.h

UCLASS()
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void GetNumSubscribedWorkshopItems(int32& NumberOfItems);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static TArray<FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32& NumberOfItems);  // parameters 0x18
};

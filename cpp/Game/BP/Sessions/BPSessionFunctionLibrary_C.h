// /Game/BP/Sessions/BPSessionFunctionLibrary.BPSessionFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPSessionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void CalculateProspectState(const FProspectInfo& ProspectInfo, AIcarusPlayerController* Target, UObject* __WorldContext, TEnumAsByte<E_ProspectState>& ProspectState);  // parameters 0xB1
    UFUNCTION(BlueprintCallable) static void HasSettled(AIcarusPlayerController* Target, const FProspectServerInfo& FProspectServerInfo, UObject* __WorldContext, bool& Settled);  // parameters 0x1C1
    UFUNCTION(BlueprintCallable) static void Have_Joined_Prospect(FString UserID, TArray<FAssociatedMemberInfo>& Members, int32 ChrSlot, UObject* __WorldContext, bool& AssignedToProspect, EProspectLocation& Status);  // parameters 0x32, named "Have Joined Prospect"
    UFUNCTION(BlueprintCallable) static bool IsAssociatedWithProspect(const FProspectInfo& Prospect, bool bIncludeOutpostsAndOpenWorld, UObject* __WorldContext, FLastProspectHostInfo& Hosted_By);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) static void ProspectInfoIsValid(FProspectServerInfo Server_Prospect_Info, bool RequiresSession, UObject* __WorldContext, bool& Valid);  // parameters 0x1C1
};

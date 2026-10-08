// /Game/BP/MiscConstructs/MissionFunctionLibrary.MissionFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UMissionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GetHistoryForMission(FFactionMissionsRowHandle MissionRow, UObject* __WorldContext, EMissionState& Mission_State, int32& Mission_End_Time, bool& FoundHistory) const;  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void IsMissionInProgress(FFactionMissionsRowHandle Mission, UObject* WorldContextObject, UObject* __WorldContext, bool& IsValid);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void IsOperationCompleteOnOpenWorld(UObject* WorldContextObject, FFactionMissionsRowHandle Operation, UObject* __WorldContext, bool& bComplete);  // parameters 0x29
};

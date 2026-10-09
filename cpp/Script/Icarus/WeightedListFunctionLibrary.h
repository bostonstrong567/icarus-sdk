// /Script/Icarus.WeightedListFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Utility/WeightedListFunctionLibrary.h

UCLASS()
class UWeightedListFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool AddElement(int32 UID, FWeightedListElement NewElement);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static bool ClearList(int32 UID);  // parameters 0x5
    UFUNCTION(BlueprintCallable) static int32 CreateNewList(const int32& Seed);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static float GetRoll(int32 UID);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static FWeightedListElement GetSelectedElement(int32 UID);  // parameters 0x28
    UFUNCTION() static TMap<int32, FStoredElement> InitListMap();  // parameters 0x50
    UFUNCTION() static FRandomStream InitStream();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool RemoveList(int32 UID);  // parameters 0x5
    UFUNCTION() static void Roll(int32 UID, float NewAccumulated);  // parameters 0x8
};

// /Script/Engine.KismetNodeHelperLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h

UCLASS()
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool BitIsMarked(int32 Data, int32 Index);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void ClearAllBits(int32& Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void ClearBit(int32& Data, int32 Index);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetEnumeratorName(UEnum* Enum, uint8 EnumeratorValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetEnumeratorUserFriendlyName(UEnum* Enum, uint8 EnumeratorValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 GetEnumeratorValueFromIndex(UEnum* Enum, uint8 EnumeratorIndex);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static int32 GetFirstUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static int32 GetRandomUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static int32 GetUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits, bool bRandom);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 GetValidValue(UEnum* Enum, uint8 EnumeratorValue);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static bool HasMarkedBit(int32 Data, int32 NumBits);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool HasUnmarkedBit(int32 Data, int32 NumBits);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void MarkBit(int32& Data, int32 Index);  // parameters 0x8
};

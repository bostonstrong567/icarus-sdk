// /Script/Engine.KismetArrayLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h

UCLASS()
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static int32 Array_Add(const TArray<int32>& TargetArray, const int32& NewItem);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static int32 Array_AddUnique(const TArray<int32>& TargetArray, const int32& NewItem);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void Array_Append(const TArray<int32>& TargetArray, const TArray<int32>& SourceArray);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Array_Clear(const TArray<int32>& TargetArray);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Array_Contains(const TArray<int32>& TargetArray, const int32& ItemToFind);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Array_Find(const TArray<int32>& TargetArray, const int32& ItemToFind);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Array_Get(const TArray<int32>& TargetArray, int32 Index, int32& Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Array_Identical(const TArray<int32>& ArrayA, const TArray<int32>& ArrayB);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void Array_Insert(const TArray<int32>& TargetArray, const int32& NewItem, int32 Index);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Array_IsValidIndex(const TArray<int32>& TargetArray, int32 IndexToTest);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Array_LastIndex(const TArray<int32>& TargetArray);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Array_Length(const TArray<int32>& TargetArray);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Array_Random(const TArray<int32>& TargetArray, int32& OutItem, int32& OutIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Array_RandomFromStream(const TArray<int32>& TargetArray, FRandomStream& RandomStream, int32& OutItem, int32& OutIndex);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Array_Remove(const TArray<int32>& TargetArray, int32 IndexToRemove);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static bool Array_RemoveItem(const TArray<int32>& TargetArray, const int32& Item);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static void Array_Resize(const TArray<int32>& TargetArray, int32 Size);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void Array_Reverse(const TArray<int32>& TargetArray);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void Array_Set(const TArray<int32>& TargetArray, int32 Index, const int32& Item, bool bSizeToFit);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void Array_Shuffle(const TArray<int32>& TargetArray);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void Array_Swap(const TArray<int32>& TargetArray, int32 FirstIndex, int32 SecondIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void FilterArray(const TArray<AActor*>& TargetArray, TSubclassOf<AActor> FilterClass, TArray<AActor*>& FilteredArray);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void SetArrayPropertyByName(UObject* Object, FName PropertyName, const TArray<int32>& Value);  // parameters 0x20
};

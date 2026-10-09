// /Script/Engine.BlueprintSetLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintSetLibrary.h

UCLASS()
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void SetSetPropertyByName(UObject* Object, FName PropertyName, const TSet<int32>& Value);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void Set_Add(const TSet<int32>& TargetSet, const int32& NewItem);  // parameters 0x54
    UFUNCTION(BlueprintCallable) static void Set_AddItems(const TSet<int32>& TargetSet, const TArray<int32>& NewItems);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void Set_Clear(const TSet<int32>& TargetSet);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Set_Contains(const TSet<int32>& TargetSet, const int32& ItemToFind);  // parameters 0x55
    UFUNCTION(BlueprintCallable) static void Set_Difference(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) static void Set_Intersection(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);  // parameters 0xF0
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Set_Length(const TSet<int32>& TargetSet);  // parameters 0x54
    UFUNCTION(BlueprintCallable) static bool Set_Remove(const TSet<int32>& TargetSet, const int32& Item);  // parameters 0x55
    UFUNCTION(BlueprintCallable) static void Set_RemoveItems(const TSet<int32>& TargetSet, const TArray<int32>& Items);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void Set_ToArray(const TSet<int32>& A, TArray<int32>& Result);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void Set_Union(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>& Result);  // parameters 0xF0
};

// /Script/Engine.BlueprintMapLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintMapLibrary.h

UCLASS()
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void Map_Add(const TMap<int32, int32>& TargetMap, const int32& Key, const int32& Value);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void Map_Clear(const TMap<int32, int32>& TargetMap);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Map_Contains(const TMap<int32, int32>& TargetMap, const int32& Key);  // parameters 0x55
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Map_Find(const TMap<int32, int32>& TargetMap, const int32& Key, int32& Value);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static void Map_Keys(const TMap<int32, int32>& TargetMap, TArray<int32>& Keys);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Map_Length(const TMap<int32, int32>& TargetMap);  // parameters 0x54
    UFUNCTION(BlueprintCallable) static bool Map_Remove(const TMap<int32, int32>& TargetMap, const int32& Key);  // parameters 0x55
    UFUNCTION(BlueprintCallable) static void Map_Values(const TMap<int32, int32>& TargetMap, TArray<int32>& Values);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void SetMapPropertyByName(UObject* Object, FName PropertyName, const TMap<int32, int32>& Value);  // parameters 0x60
};

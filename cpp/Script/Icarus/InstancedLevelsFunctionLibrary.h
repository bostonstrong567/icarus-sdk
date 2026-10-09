// /Script/Icarus.InstancedLevelsFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedLevelsFunctionLibrary.h

UCLASS()
class UInstancedLevelsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool CheckMapHasNumberEntrances(FInstancedMapDataRowHandle Row, int32 Entrances);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) static FEdInstancedLevelDetail GetInstancedLevelDetails(UObject* WorldContextObject);  // parameters 0xB0
    UFUNCTION(BlueprintCallable) static bool IsActorInsideWorldBounds(UObject* WorldContextObject, AActor* Actor);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool IsLoadedDynamicLevel(UObject* WorldContextObject, ULevel* Level);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool IsLocationInsideWorldBounds(UObject* WorldContextObject, const FVector& Location);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static bool IsPlayerInInstancedLevel(UObject* WorldContextObject, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool IsPlayerInsideWorldBounds(UObject* WorldContextObject, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static FInstancedMapDataRowHandle PickLevelFromSet(FGroupedInstancedMapDataRowHandle Row, EInstancedLevelPickType Picker);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static FString ShortenFullyQualifiedLevelName(const FInstancedMapData& MapData);  // parameters 0x90
};

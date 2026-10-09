// /Script/Icarus.IcarusQuestFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Quests/IcarusQuestFunctionLibrary.h

UCLASS()
class UIcarusQuestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool DistanceCheckFromLocation(AActor* Actor, const FVector& Location, float Distance);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetCurrentPlayerCount(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static TArray<AIcarusPlayerCharacter*> GetNearbyPlayersAtLocation(UObject* WorldContextObject, const FVector& Location, float MaxDistance, bool bIgnoreZ);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static AQuestMarker* GetQuestMarker(AActor* StartingLocation, FQuestQueriesRowHandle TagQueriesRowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static AQuestMarker* GetQuestMarkerFromTags(AActor* StartingLocation, TArray<FQuestQueriesRowHandle> TagQueriesRowHandles);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<AQuestMarker*> GetQuestMarkers(UObject* WorldContextObject, FQuestQueriesRowHandle QuestQueriesRowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<AQuestMarker*> GetQuestMarkersFromTags(UObject* WorldContextObject, TArray<FQuestQueriesRowHandle> TagQueriesRowHandles);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static bool IsSpecificItem(AIcarusActor* Actor, FItemsStaticRowHandle ItemStatic);  // parameters 0x21
};

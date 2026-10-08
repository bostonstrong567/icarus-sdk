// /Game/BP/Quests/Elysium/Story/Common/BP_EdenSetup_FunctionLibrary.BP_EdenSetup_FunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_EdenSetup_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void CheckNPC(AQuestManager* QuestManager, FString Name, FQuestQueriesRowHandle Location, FItemsStaticRowHandle Item, TSubclassOf<AIcarusItem> Class, UObject* __WorldContext);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void CleanupNPC(FString Name, AQuestManager* Target, UObject* __WorldContext);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetupArkadia(UObject* WorldContextObject, UObject* __WorldContext, bool& Success);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void SetupEden(AActor* Context, UObject* __WorldContext, bool& Success);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void Spawn_Map_Deployable(FItemsStaticRowHandle Item, const FTransform& SpawnTransform, TSubclassOf<AIcarusItem> Override_Actor_Class, UObject* __WorldContext, AIcarusItem*& Deployable);  // parameters 0x68, named "Spawn Map Deployable"
};

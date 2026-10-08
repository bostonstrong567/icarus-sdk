// /Game/BP/Quests/BP_QuestMarker_PreviewMesh.BP_QuestMarker_PreviewMesh_C
// Derives from: ABP_QuestMarker_C > AQuestMarker > AActor > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_QuestMarker_PreviewMesh_C : public ABP_QuestMarker_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0298, size 0x8
};

// /Game/BP/Settlement/Misc/SettlementProxyMeshConfig.SettlementProxyMeshConfig
// size 0x20

USTRUCT()
struct SettlementProxyMeshConfig
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ItemTagQuery;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumRequiredToShow;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ApplyToAllProxyIndexes;  // 0x001C, size 0x1
};

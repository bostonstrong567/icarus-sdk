// /Script/Icarus.IcarusNavLink
// Derives from: ANavLinkProxy > AActor > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Navigation/IcarusNavLink.h

UCLASS(Config=Engine)
class AIcarusNavLink : public ANavLinkProxy
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LeftLinkLocation;  // 0x0270, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RightLinkLocation;  // 0x027C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENavLinkDirection> LinkDirection;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavArea> AreaClass;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDirtyNavigationOnBeginPlay;  // 0x0298, size 0x1

    UFUNCTION(BlueprintCallable) void InitialiseNavLink();
};

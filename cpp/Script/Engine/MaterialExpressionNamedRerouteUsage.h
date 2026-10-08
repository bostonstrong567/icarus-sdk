// /Script/Engine.MaterialExpressionNamedRerouteUsage
// Derives from: UMaterialExpressionNamedRerouteBase > UMaterialExpressionRerouteBase > UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionNamedReroute.h

UCLASS()
class UMaterialExpressionNamedRerouteUsage : public UMaterialExpressionNamedRerouteBase
{
public:
    UPROPERTY() UMaterialExpressionNamedRerouteDeclaration* Declaration;  // 0x0040, size 0x8
    UPROPERTY() FGuid DeclarationGuid;  // 0x0048, size 0x10
};

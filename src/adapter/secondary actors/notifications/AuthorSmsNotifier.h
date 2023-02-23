#pragma once
#include "pch.h"
#include "IAuthorNotifierPort.h"

class AuthorSmsNotifier : public IAuthorNotifierPort {
public:
	AuthorSmsNotifier() noexcept = default; //required
	AuthorSmsNotifier(const AuthorSmsNotifier& other) noexcept = delete;
	AuthorSmsNotifier(AuthorSmsNotifier&& other) noexcept = delete;

public:
	virtual void NotifyAboutCreationOf(ArticlePtr const article) override;
};